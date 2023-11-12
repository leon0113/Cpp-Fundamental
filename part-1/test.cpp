class Solution
{
    static ArrayList<Integer> sumTringle(int mat[][], int n)
    [
        ArrayList<Integer> al = new ArrayList<Integer> ();
        int s1 = 0, s2 = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j< n; j++){
                if(j>=i)
                s1+=mat[i][j];
                if(j<=i)
                s2+=mat[i][j];
            }
        }
        al.add(s1);
        al.add(s2);
        return al;
    ]
}