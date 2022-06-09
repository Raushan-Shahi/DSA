// time complexity q1


#include<stdio.h>

void func1(int array[], int length)
{
    int sum=0;
    int product =1;
    for (int i = 0; i <length; i++)
    {
        sum+=array[i];
    }
 
    for (int i = 0; i < length; i++)
    {
        product*=array[i];
    }
}
 
int main()
{
    int arr[] = {3,4,66};
    func1(arr,3);
    return 0;
}


/* 
    Time complexity = Tn = K1(n) + K2(n) = n(K1+K2) 
    so, Tn = O(n)      big O of n (linear dependency on time ) 
*/