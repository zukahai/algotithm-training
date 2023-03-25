var fs = require('fs');
var path = require('path');
let genarate = (update) => {
    var folders = fs.readdirSync(__dirname);
    var folders = folders.filter(function (file) {
        return fs.statSync(path.join(__dirname, file)).isDirectory();
    });

    for (let i = 0; i < folders.length; i++) {
        let folder = folders[i];
        if (fs.existsSync(path.join(__dirname, folder, 'testcase')) == false) {
            continue;
        }
        let testcase = fs.readdirSync(path.join(__dirname, folder, 'testcase'));


        testcase = testcase.filter(function (file) {
            return fs.statSync(path.join(__dirname, folder, 'testcase', file)).isDirectory();
        });
        let test = [];
        for (let j = 0; j < testcase.length; j++) {
            //if have file testcase.json continue
            if (fs.existsSync(path.join(__dirname, folder, 'testcase', testcase[j], 'test.json')) == true && update == false) {
                continue;
            }
            //check folder testcase have folder , if not continue
            let folder_testcase = fs.readdirSync(path.join(__dirname, folder, 'testcase', testcase[j]));
            if (folder_testcase.length == 0) {
                continue;
            }
            //check folder testcase have file input.txt and output.txt
            if (fs.existsSync(path.join(__dirname, folder, 'testcase', testcase[j], 'input.txt')) == false) {
                continue;
            }

            if (fs.existsSync(path.join(__dirname, folder, 'testcase', testcase[j], 'output.txt')) == false) {
                continue;
            }
            let input = fs.readFileSync(path.join(__dirname, folder, 'testcase', testcase[j], 'input.txt'), 'utf8');
            let output = fs.readFileSync(path.join(__dirname, folder, 'testcase', testcase[j], 'output.txt'), 'utf8');
            let result = {
                "input": input,
                "output": output
            }
            test.push(result);
        }
        data = {
            "test": test
        }
        fs.writeFileSync(path.join(__dirname, folder, 'testcase', 'test.json'), JSON.stringify(data, null, 4));
    }
}

module.exports = genarate;

genarate(false);