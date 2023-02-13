class Solution {
public:
    int countOperations(int num1, int num2) 
    {
        int counter=0;
        while(num1>0 and num2>0)
        {
            if(num1==num2)
            {
                counter++;
                break;
            }
            if(num1<num2)
            {
                num2=num2-num1;
                 counter++;
            }
            else
            {
                num1=num1-num2;
                 counter++;
            }
           
            
        }
        return counter;
    }
};