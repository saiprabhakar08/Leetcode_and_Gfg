class Solution {
    public boolean isValid(String word) {
        if(word.length() < 3) return false;
        int vowels = 0, consonants = 0, symbols = 0;
        for(char it : word.toCharArray())
        {
            if(it == 'A' || it == 'E' || it == 'I' || it == 'O' || it == 'U' || it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u')
            {
                vowels++;
            }
            else if(it != '1' && it != '2' && it != '3' && it != '4' && it != '5' && it != '6' && it != '7' && it != '8' && it != '9' && it != '0' && it != '@' && it != '#' && it != '$')
            {
                consonants++;
            }
            if(it == '@' || it == '#' || it == '$') symbols++;
        }
        if(vowels == 0 || consonants == 0 || symbols > 0) 
        {
            System.out.println(symbols);
            return false;
        }
            
        return true;
                
    }
}