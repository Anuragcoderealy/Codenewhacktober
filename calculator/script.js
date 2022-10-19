class Calculator {
  constructor(previousOperandTextElement, currentOperandTextElement) {
    this.previousOperandTextElement = previousOperandTextElement;
    this.currentOperandTextElement = currentOperandTextElement;
    this.clear();
  }

  clear() {
    this.currentOperand = "";
    this.previousOperand = "";
    this.operation = undefined;
    this.prevoperation = undefined;
  }

  delete() {
    this.currentOperand = this.currentOperand.slice(0, -1);
  }

  appendNumber(number) {
    if (number === "." && this.currentOperand.includes(".")) return;
    this.currentOperand = this.currentOperand.toString() + number;
  }

  chooseOperation(operation) {
    console.log(this.currentOperand)
    if (this.currentOperand.includes("(")) {
      this.prevoperation = this.operation;
      this.operation = operation;
      this.currentOperand = this.currentOperand + this.operation;
      return;
    }
    
    if (operation == "!") {
        this.operation = operation;
        console.log(this.currentOperand)
        console.log(this.operation)
        return;

    }

    if (operation == "√") {
      this.operation = operation;
      return;
    }
    
    
    if (this.currentOperand == "") {
      return;
    }

    if (this.previousOperand != "") {
      this.compute();
    }

    this.previousOperand = this.currentOperand;
    this.currentOperand = "";
    this.operation = operation;
  }

  calculate() {
    const prev = parseFloat(this.previousOperand);
    const curr = parseFloat(this.currentOperand);

    
    if ((this.operation != "√" && this.operation!= "!") && (isNaN(prev) || isNaN(curr))) return;

    let computation;
    switch (this.operation) {
      case "√":
        computation = Math.sqrt(curr);
        break;
      case "!":
        let num=curr;
        console.log(num);
        if (num === 0 || num === 1)
         computation= 1;
      
      else {
        for (var i = num - 1; i >= 1; i--) { 
            num = num * i;
          }
          computation = num;
      }
      console.log(computation);
        break;
      
      case "◣":
        computation = Math.sqrt(prev * prev + curr * curr);
        break;
      case "^":
            computation = Math.pow(prev, curr);
            break;  
      case "-":
        computation = prev - curr;
        break;
      case "+":
        computation = prev + curr;
        break;
      case "*":
        computation = prev * curr;
        break;
      case "÷":
        computation = prev / curr;
        break;

      default:
        break;
    }
    this.currentOperand = computation;
    this.previousOperand = "";
    this.operation = undefined;
  }
  compute() {
    if (this.currentOperand.includes(")")) {
      let text = this.currentOperand;

      console.log(this.currentOperand);

      text = text.slice(1, text.length - 1);
      console.log(text);

      // let  myArray = text.split("");
      // let indop = myArray.findIndex(checkop);
      // function checkop(ele){
      // return (ele === '+'|| ele=== '*' || ele=== '-' || ele=== '/')}

      // let op = myArray[indop];

      let myArray = text.split(this.operation);
      console.log(myArray);
      let res;
      let num1 = parseFloat(myArray[0]);
      let num2 = parseFloat(myArray[1]);

      switch (this.operation) {
        case "√":
          res = Math.sqrt(num1);
          break;
        case "◣":
          res = Math.sqrt(num1 * num1 + num2 * num2);
          break;
        case "-":
          res = num1 - num2;
          break;
        case "+":
          res = num1 + num2;
          break;
        case "*":
          res = num1 * num2;
          break;
        case "÷":
          res = num1 / num2;
          break;

        default:
          break;
      }

      console.log(res);

      this.currentOperand = "" + res;
      console.log(this.currentOperand);

      this.operation = this.prevoperation;
      this.prevoperation = undefined;
    }

    this.calculate();
  }

  getDisplayNumber(number) {
    const stringNumber = number.toString();
    const integerDigits = parseFloat(stringNumber.split(".")[0]);
    const decimalDigits = stringNumber.split(".")[1];

    let integerDisplay;

    if (isNaN(integerDigits)) {
      integerDisplay = "";
    } else {
      integerDisplay = integerDigits.toLocaleString("en", {
        maximumFractionDigits: 0,
      });
    }
    if (decimalDigits != null) {
      return `${integerDisplay}.${decimalDigits}`;
    } else {
      return integerDisplay;
    }
  }

  updateDisplay() {
    // this.currentOperandTextElement.innerText = this.getDisplayNumber(this.currentOperand) ;
    this.currentOperandTextElement.innerText = this.currentOperand;
    console.log(this.operation);
    console.log(this.prevoperation);

    if (this.prevoperation == undefined && this.operation != undefined) {
      if (this.operation == "√") {
        this.previousOperandTextElement.innerText = `${this.operation}`;
      } else {
        this.previousOperandTextElement.innerText = `${this.previousOperand}${this.operation}`;
      }
    } else if (this.prevoperation != undefined) {
      this.previousOperandTextElement.innerText = `${this.previousOperand}${this.prevoperation}`;
    } else {
      this.previousOperandTextElement.innerText = "";
    }
  }
}

const numberButtons = document.querySelectorAll("[data-number]");
const operationButtons = document.querySelectorAll("[data-operation]");
const equalsButton = document.querySelector("[data-equals]");
const deleteButton = document.querySelector("[data-delete]");
const allClearButton = document.querySelector("[data-all-clear]");
const previousOperandTextElement = document.querySelector(
  "[data-previous-operand]"
);
const currentOperandTextElement = document.querySelector(
  "[data-current-operand]"
);

const calculator = new Calculator(
  previousOperandTextElement,
  currentOperandTextElement
);

numberButtons.forEach((button) => {
  button.addEventListener("click", () => {
    calculator.appendNumber(button.innerHTML);
    calculator.updateDisplay();
  });
});

operationButtons.forEach((button) => {
  button.addEventListener("click", () => {
    calculator.chooseOperation(button.innerHTML);
    calculator.updateDisplay();
  });
});

allClearButton.addEventListener("click", () => {
  calculator.clear();
  calculator.updateDisplay();
});

deleteButton.addEventListener("click", () => {
  calculator.delete();
  calculator.updateDisplay();
});

equalsButton.addEventListener("click", () => {
  calculator.compute();
  calculator.updateDisplay();
});
