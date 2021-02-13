class GfG
{
    int atoi(String str)
    {
        int a;
        try {
	        a = Integer.parseInt(str);
        }
        catch(Exception ex ){
            a=-1;
        }
        return a;
    }
}
