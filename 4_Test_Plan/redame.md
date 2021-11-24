## Test Plan

## High-Level Test Plan

| Test ID | Description | Exp I/P | Exp O/P | Actual Output | Type of Test |
| ------- | ----------- | ------- | ------- | ------------- | ------------ |
| HL_01 | Check if the user has entered correct details | user name & password | Calls the function and check the input fields | SUCCESS (Manual) | REQUIREMENT BASED |
| HL_02 | Choice the option | student data | Calls the function  | SUCCESS (Manual) | REQUIREMENT BASED |
| HL_03 | Check if the user details entered  valid or not | (1)  Add student (2) View  function (3) Search student| Calls the function and check the input fields | SUCCESS | REQUIREMENT BASED |
| HL_04 | Check modification of information | Add student details or not| Calls the function and check the input field is updated or not | SUCCESS | REQUIREMENT BASED |
|H_05|User should be able to Login with valid credentials|Username:user Password:pass |Login Failed Enter Again Username & Password|  Login Failed Enter Again Username & Password  |Scenario Based|

## Low-Level Test Plan

| Test ID | HL_ID | Description | Exp I/P | Exp O/P | Actual Output | Type of Test |
| ------- | ----- | ----------- | ------- | ------- | ------------- | ------------ |
| LL_01 | HL_01 | Check if the user has entered correct login details | login sucessfully  | Calls the function and check the input fields | SUCCESS (Manual) | REQUIREMENT BASED |
| LL_02 | HL_01 | Check if the user has entered in sytem | Student details| Calls the function and check the input fields | SUCCESS | REQUIREMENT BASED |
| LL_03 | HL_03 | Check if the user has entered in any Add option | Fill the sudent details| Calls the function and check the input fields | SUCCESS (Manual) | REQUIREMENT BASED |
| LL_04 | HL_01 | Check if the user has entered the update credenntial | enter new user name and password| Calls the function and check the input fields | SUCCESS (Manual) | REQUIREMENT BASED |

