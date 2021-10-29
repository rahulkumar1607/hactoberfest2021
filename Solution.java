class Solution {
    public String longestPalindrome(String s) {
        int j=s.length();
        while(j>0){
            int i=0;
            while(i+j<=s.length()){
                if(isPalindrome(s.substring(i,i+j))==true){
                    return s.substring(i,i+j);
                }
                i++;
            }
            j--;
        }
        return Character.toString(s.charAt(0));
    }
    public boolean isPalindrome(String s){
        int li=0,ri=s.length()-1;
        while(li<ri){
            if(s.charAt(li)!=s.charAt(ri)){
                return false;
            }
            li++;
            ri--;
        }
        return true;
    }
}
