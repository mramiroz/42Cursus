int selector(char c, t_list ptr)
{
    int count;
    
    count = 0;
    if(c == 'c')
        count += printc(ptr)
    else if(c == 'i')
        count += printi(ptr)

    return (count);
}