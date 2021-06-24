import java.util.*;
 
class Main
{
    static int minOperations(int n, int m,int k, int matrix[][])
    {
        int [] arr = new int[n * m];
     
        int mod = matrix[0][0] % k;
     
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                arr[i * m + j] = matrix[i][j];
                if (matrix[i][j] % k != mod)
                {
                    return -1;
                }
            }
        }
        Arrays.sort(arr);
     
        int median = arr[(n * m) / 2];
        int minOperations = 0;
        for (int i = 0; i < n * m; ++i)
            minOperations += Math.abs(arr[i] - median) / k;
        if ((n * m) % 2 == 0)
        {
        int median2 = arr[(n * m) / 2];
        int minOperations2 = 0;
        for (int i = 0; i < n * m; ++i)
            minOperations2 += Math.abs(arr[i] - median2) / k;
        minOperations = Math.min(minOperations, minOperations2);
        }
        return minOperations;
    }
    
    public static void main(String []args)
    {
    Scanner sc = new Scanner(System.in);
    int ar[] = new int[3];
    for(int i=0;i<3;i++)
    {
     ar[i]=sc.nextInt();
    }
    int n=ar[0];
    int m = ar[1];
    int matrix[][] = new int[n][m];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
       matrix[i][j] = sc.nextInt();
      }
    }
    System.out.println(minOperations(n,m,ar[2],matrix));
}
}
