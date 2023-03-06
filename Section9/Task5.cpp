int calculate_sum() 
{

    int sum {0};
    
    for (int i=1;i<=15; ++i) 
    {
        if (i % 2 != 0) 
        {
            sum += i;
        }
    }
   
    return sum;
}