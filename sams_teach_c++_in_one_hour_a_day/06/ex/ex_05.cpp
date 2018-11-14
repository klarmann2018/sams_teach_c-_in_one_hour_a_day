5.what is wrong with this code?

for(int Counter=0; Counter = 10; ++ Counter)
    cout << Counter << " ";


============================================================== 
for 不能执行，条件不满足
the programmer unintentionally makes an assignment to 10 in the for loop
condition statement.
============================================================== 

6. What is wrong with this code?
int LoopCounter = 0;
while(LoopCounter < 5);
{
    cout << LoopCounter << " ";
    LoopCounter++;
}

============================================================== 
while 后面的 分号多余
============================================================== 

7. What is wrong with this code?
cout << "Enter a number between 0 and 4" << endl;
int Input = 0;
cin >> Input;

switch (Input)
{
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        cout << "Valid input" << endl;
    default:
        cout << "Invalid input" << end;
}

============================================================== 
35 行后 应该有个 break 不然 同时都会执行
============================================================== 

