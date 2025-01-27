double av(double *temp,int x)
{
    double average = 0.0;
    x = 7;
    for(int i =0;i<7;i++)
    {
        average = average + temp[i];
    }
    return average/x;
}
