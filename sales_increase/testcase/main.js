var fs = require('fs');
var path = require('path');
var folders = fs.readdirSync(__dirname);
var folders = folders.filter(function (file) {
    return fs.statSync(path.join(__dirname, file)).isDirectory();
});
let test = [];
for (let i = 0; i < folders.length; i++) {
    let folder = folders[i];
    let input = fs.readFileSync(path.join(__dirname, folder, 'input.txt'), 'utf8');
    let output = fs.readFileSync(path.join(__dirname, folder, 'output.txt'), 'utf8');

    let result = {
        "input": input,
        "output": output
    }
    test.push(result);
}
//save to file test.json
fs.writeFileSync(path.join(__dirname, 'test.json'), JSON.stringify(test, null, 4));