int function(int n)
{
    int i = 0;
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        i = random(n - 1);
        printf("this\n");
        return function(i) + function(n - 1 - i);
    }
}



/*
    Time complexity = Tn = k1 + k2(n)    
                         = k2(n)            ignoring the constant k1\
                         = O(n)             big O of n
*/