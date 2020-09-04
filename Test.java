import java.util.*;
class Test
{
    



	 
	static int maxProduct(int arr[], int n) 
	{ 
		
	
		int minVal = arr[0]; 
		int maxVal = arr[0]; 
	
		int maxProduct = arr[0]; 
	
		for (int i = 1; i < n; i++) 
		{ 
	
			
			if (arr[i] < 0) 
			{ 
				int temp = maxVal; 
				maxVal = minVal; 
				minVal =temp; 
			
			} 
	
			 
			maxVal = Math.max(arr[i], maxVal * arr[i]); 
			minVal = Math.min(arr[i], minVal * arr[i]); 
	
			 
			maxProduct = Math.max(maxProduct, maxVal); 
		} 
	
		 
		return maxProduct; 
	} 
	
	
	public static void main (String[] args) 
	{ 
        
        int n;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of array");
        n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter elements of array");
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=sc.nextInt();
        } 
		 
	
		System.out.println( "product is "+ maxProduct(arr, n)); 
	} 
}