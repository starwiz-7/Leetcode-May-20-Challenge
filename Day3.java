class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        int a[] = new int[256];
        for (int i = 0; i < ransomNote.length(); i++)
        {
            a[ransomNote.charAt(i)]++;
        }
        for (int i = 0; i < magazine.length(); i++)
        {
            a[magazine.charAt(i)]--;
        }
        for (int i = 0; i < 256; i++)
        {
            if (a[i] > 0)
            {
                return false;
            }
        }
        return true;
    }
}
