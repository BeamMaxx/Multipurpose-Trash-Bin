// login.js
const display = document.getElementById('display');
function appendToDisplay(character) {
    display.value += character;
}

function removeLastCharacter() {
    display.value = display.value.slice(0, -1);
}

function ClearToDisplay() {
    display.value = '';
}