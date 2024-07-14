#include <stdio.h>
 
int main()
{
	float Basic, HRA, DA, Gross_Salary;
  	
	printf("\n Please Enter the Basic Salary of an Employee  :  ");
  	scanf("%f", &Basic);
  
  	if (Basic <= 10000)
  	{
  		HRA = (Basic * 8) / 100; // or HRA = Basic * (8 / 100)
		DA = (Basic * 10) / 100; // Or Da= Basic * 0.1    	
  	} 
  	else if (Basic <= 20000)
  	{
  		HRA = (Basic * 16) / 100;
	  	DA = (Basic * 20) / 100;  	
  	}
  	else
  	{
	   	HRA = (Basic * 24) / 100; 
	   	DA = (Basic * 30) / 100;
	}
	Gross_Salary = Basic + HRA + DA;
	printf("\n Gross Salary of this Employee  =  %.2f", Gross_Salary); 
	
  	return 0;
}<!DOCTYPE html>
<html>
<head>
  <title>Simple Calculator</title>
</head>
<body>
  <h1>Simple Calculator</h1>
  <label for="num1">Enter Number 1:</label>
  <input type="number" id="num1">
  <br>
  <label for="num2">Enter Number 2:</label>
  <input type="number" id="num2">
  <br>
  <label for="operation">Select Operation:</label>
  <select id="operation">
    <option value="add">Addition</option>
    <option value="subtract">Subtraction</option>
    <option value="multiply">Multiplication</option>
    <option value="divide">Division</option>
  </select>
  <br>
  <button id="calculate-btn">Calculate</button>
  <p id="result"></p>

  <script>
    const calculateButton = document.getElementById("calculate-btn");
    const resultElement = document.getElementById("result");

    calculateButton.addEventListener("click", () => {
      const num1 = parseFloat(document.getElementById("num1").value);
      const num2 = parseFloat(document.getElementById("num2").value);
      const operation = document.getElementById("operation").value;

      let result;
      
      switch (operation) {
        case "add":
          result = num1 + num2;
          break;
        case "subtract":
          result = num1 - num2;
          break;
        case "multiply":
          result = num1 * num2;
          break;
        case "divide":
          result = num1 / num2;
          break;
        default:
          result = "Invalid operation";
      }

      resultElement.textContent = `Result: ${result}`;
    });
  </script>
</body>
</html>
