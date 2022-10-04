let screen= document.getElementById('screen');
buttons = document.querySelectorAll('button');

// To enter element at current cursor location
function insertAtCursor(myField, myValue) {
    if (document.selection) {
        myField.focus();
        sel = document.selection.createRange();
        sel.text = myValue;
    }
    else if (myField.selectionStart || myField.selectionStart == '0') {
        var startPos = myField.selectionStart;
        var endPos = myField.selectionEnd;
        myField.value = myField.value.substring(0, startPos)
            + myValue
            + myField.value.substring(endPos, myField.value.length);
        myField.selectionStart = startPos + myValue.length; 
        myField.selectionEnd = startPos + myValue.length;
    } 
    else {
        myField.value += myValue;
    }
}

// To backspace from current cursor location
function deleteAtCursor(myField) {

    if (myField.selectionStart || myField.selectionStart == '0') {
        var temp=myField.value;
        var startPos = myField.selectionStart;
        var endPos = myField.selectionEnd;
        myField.value = myField.value.substring(0, startPos-1)
            + myField.value.substring(endPos, myField.value.length);
        
        if(temp!=myField.value){
            myField.selectionStart = startPos-1;
        myField.selectionEnd = startPos-1;
        }
    } 
    else {
        myField.value =substring(0,myField.value.length-1);
    }
}

const operator=['+','X','/','-','*'];


// To handle with input clicked through buttons
let clear=0;
for(button of buttons){
    button.addEventListener('click', (x)=>{
        Text=x.target.innerText; 
        if(Text=='X'){
            if(clear && !(operator.includes(Text))) screen.value='';
            insertAtCursor(screen,'*');
            clear=0;
        }
        else if(Text=='⌫'){
            if(clear) screen.value='';
            deleteAtCursor(screen);
            clear=0;
        }
        else if(Text=='C'){
            screen.value="";
        } 
        else if(Text=='='){
            screen.value=Function("return " +screen.value)();
            clear=1;
        }
        else{
            if(clear && !(operator.includes(Text))) screen.value='';
            insertAtCursor(screen,Text);
            clear=0;
        }
    })
}

// To handle with input entered from keyboard
screen.addEventListener("keypress", function(event) {

    console.log(event.key)
    if (event.key == "Enter") {
        clear=1;
        document.getElementById("=").click();
    }
    else if(clear && !(operator.includes(event.key))){
        screen.value='';   
        clear=0;
    }
    else clear =0;
});

// To delete whole expression when backspace is pressed after evaluation
screen.addEventListener("keydown", function(event) {

    if (clear && event.key == "Backspace") {
        clear=0;
        screen.value='';
    }
});