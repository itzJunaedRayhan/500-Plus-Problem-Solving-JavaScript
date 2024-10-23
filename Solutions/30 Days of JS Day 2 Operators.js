//  Task:
/*
Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost. Round the result to the nearest integer.

Example
mealCost   = 100;
tipPercent = 15;
taxPercent = 8;
A tip of 15% * 100 = 15, and the taxes are 8% * 100 = 8. Print the value  and return from the function.
*/

function solve(meal_cost, tip_percent, tax_percent) {
    // Write your code here
    let meal = meal_cost;
    let tip  = (meal_cost / 100) * tip_percent;
    let tax  = (meal_cost / 100) * tax_percent;
    let totalCost = meal + tip + tax;
    console.log(Math.round(totalCost));
}