class Solution {
    public int findComplement(int num) {
        StringBuffer temp1 = new StringBuffer(Integer.toString(num,2));
        for(int i=0;i<temp1.length();i++)
        {
            if(temp1.charAt(i)=='0')
            {
                temp1.setCharAt(i,'1');
            }
            else
            {
                temp1.setCharAt(i,'0');
            }
        }
        String temp3=new String(temp1);
        int temp2=Integer.parseInt(temp3,2);
       return temp2; 
    }
}