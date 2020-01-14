var inputs = document.querySelectorAll('.input pre');
var outputs = document.querySelectorAll('.output pre');

function saveText(filename, text) {
    var tempElem = document.createElement('a');
    tempElem.setAttribute('href', 'data:text/plain;charset=utf-8,' + encodeURIComponent(text));
    tempElem.setAttribute('download', filename);
    tempElem.click();
}

function download_files() {
    myStrText = "";
    for(var i = 0; i < inputs.length; i++)
        myStrText += inputs[i].innerText;

    saveText("input.txt", myStrText);

    myStrText = "";
    for(var i = 0; i < outputs.length; i++)
        myStrText += outputs[i].innerText;

    saveText("output.txt", myStrText);        
}