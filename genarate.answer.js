var fs = require('fs');
var path = require('path');
let readFileCopy_CPP = () =>{
    let name = 'copy.cpp';
    let data = fs.readFileSync(path.join(__dirname, name), 'utf8');
    return data;
} 
let genarate = (update) => {
    var folders = fs.readdirSync(__dirname);
    var folders = folders.filter(function (file) {
        return fs.statSync(path.join(__dirname, file)).isDirectory();
    });
    let copy_cpp = readFileCopy_CPP();
    for (let i = 0; i < 1; i++) {
        // genrate answer 
        //check folder have folder answer
        let folder = folders[i];
        if (fs.existsSync(path.join(__dirname, folder, 'answer')) == false) {
            continue;
        }
        if (fs.existsSync(path.join(__dirname, folder, 'answer2', 'answer.cpp')) == true && update == false) {
            continue;
        }
        fs.writeFileSync(path.join(__dirname, folder, 'answer2', 'answer.cpp'), copy_cpp);
    }
}

module.exports = genarate;

genarate(false);