class Solution {
    public boolean halvesAreAlike(String s) {
        int i = 0,j = s.length() / 2;
        int count1 = 0, count2 = 0;
        while(j < s.length() && i < (s.length() / 2))
        {
            char temp = Character.toLowerCase(s.charAt(i));
            if(temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u') count1++;
            char temp1 = Character.toLowerCase(s.charAt(j));
            if(temp1 == 'a' || temp1 == 'e' || temp1 == 'i' || temp1 == 'o' || temp1 == 'u') count2++;
            i++;
            j++;
        }
        return count1 == count2;
    }
}