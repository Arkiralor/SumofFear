//Program to solve the "Sum of Fear" problem using OOP in C++.
#include<iostream>

using namespace std;

class sumoffear
{
    private:
        int array[4], results[6][2];
        int record;
    public:
        void enterarray(void);
        void findsum(int sum);
        void showresults(void);
};

int main()
{
    sumoffear obj;
    int n;
    obj.enterarray();
    cout<<"\nEnter sum to be checked. \n";
    cin>>n;
    obj.findsum(n);
    obj.showresults();
    return 0;
}

void sumoffear::enterarray(void)
{
    cout<<"\nEnter the four elements to be compared.\n";
    int i;
    for(i=0;i<4;i++)
    {
        cin>>array[i];
    }
}

void sumoffear::findsum(int sum)
{
    int i, rec1;
    rec1=0;
    for(i=0;i<3;i++)
    {
        int j;
        for(j=i+1;j<4;j++)
        {
            if(array[i]+array[j]==sum)
            {
                results[rec1][0] = array[i];
                results[rec1][1] = array[j];
                rec1++;
            }
        }
        record=rec1;
    }
}

void sumoffear::showresults(void)
{
    if(record==0)
    {
        cout<<"\nThere are no valid pairs.\n";
    }
    
    else
    {
        int i=0;
        cout<<"\nThe following are the valid pairs: \n";
        while(i<record && record!=0 )
        {
            cout<<results[i][0]<<", "<<results[i][1]<<". \n";
            i++;
        }
    }
}