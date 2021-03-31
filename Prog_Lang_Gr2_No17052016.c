#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL)); 

	char opt1, A,B;
	int opt2,opt3,cs1,cs2,cs3,cs4;
	
	printf("===================== MENU ====================\nA) Sort the array by selecting a sort algorithm.\nB) Compare all sort algorithms.\n");
	
	scanf("%c", &opt1);
	
	switch(opt1){
	
	case 'A':
		printf("Select a sort algorithm:\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Shell Sort\n");
		scanf("%d",&opt2);
		
		switch(opt2){
		
case 1:   //*****************************************BUBBLE SORT********************************************

			printf("The type of Sorting:\n1. In Ascending Order\n2. In Descending Order\n");
			scanf("%d",&cs1);
			
			
			if(cs1 == 1){	//bubble sort-artan

			  int c, n[10]; 
		
			printf("Randomly generated numbers :\n");

			  for (c = 0; c < 10; c++) {
			    n[c] = rand() % 100 + 1;
				printf(" %d	", n[c]);
			  }
			printf("\n");

					   int i = 0, j = 0, tmp;
					   for (i=0 ; i < 10; i++) {   
					       for (j=0 ; j < 9 - i; j++) {          
					            if (n[j] > n[j + 1]) {  
					               tmp = n[j];
					               n[j] = n[j + 1];
					               n[j + 1] = tmp;
					           }
					       }
					   }	
			printf("Sorted numbers :\n");
    		for (i = 0; i < 10; i++)
		    printf(" %d	", n[i]);	
		    break;
}
			
			if(cs1 == 2){	//bubble sort-azalan
			int c, n[10]; 
		
			printf("Randomly generated numbers :\n");

			  for (c = 0; c < 10; c++) {
			    n[c] = rand() % 100 + 1;
				printf(" %d	", n[c]);
			  }
			printf("\n");

					   int i = 0, j = 0, tmp;
					   for (i=0 ; i < 10; i++) {   
					       for (j=0 ; j < 9 - i; j++) {          
					            if (n[j] < n[j + 1]) {  
					               tmp = n[j];
					               n[j] = n[j + 1];
					               n[j + 1] = tmp;
					           }
					       }
					   }	
			printf("Sorted numbers :\n");
    		for (i = 0; i < 10; i++)
		    printf(" %d	", n[i]);	
		    break;
}


case 2:		//*****************************************SELECTION SORT********************************************
			printf("The type of Sorting:\n1. In Ascending Order\n2. In Descending Order\n");
			scanf("%d",&cs2);
			if(cs2 == 1){		//selection sort-artan
			int c, n[10]; 
		
			printf("Randomly generated numbers :\n");

			  for (c = 0; c < 10; c++) {
			    n[c] = rand() % 100 + 1;
				printf(" %d	", n[c]);
			  }
			printf("\n");
			
			int i,j;
			int min;
			for (i=0; i<10; i++){
				min = i;
				for(j = i; j< 10; j++){
					if (n[j] < n[min]){
					min = j;
					}
				}
				int temp = n[i];
				n[i] = n[min];
				n[min] = temp;
			}
	
			printf("Sorted numbers :\n");
    		for (i = 0; i < 10; i++)
		    printf(" %d	", n[i]);	
		    break;
 			}

		
			if(cs2 == 2){	//selection sort-azalan
							  
			  int c, n[10]; 
		
			printf("Randomly generated numbers :\n");

			  for (c = 0; c < 10; c++) {
			    n[c] = rand() % 100 + 1;
				printf(" %d	", n[c]);
			  }
			printf("\n");
 
			int i,j;
			int min;
			for (i=0; i<10; i++){
				min = i;
				for(j = i; j< 10; j++){
					if (n[j] > n[min]){
					min = j;
					}
				}
				int temp = n[i];
				n[i] = n[min];
				n[min] = temp;
			}
	
			printf("Sorted numbers :\n");
    		for (i = 0; i < 10; i++)
		    printf(" %d	", n[i]);	
		    break;
 
			}
	
case 3:		//*****************************************INSERTION SORT********************************************
			printf("The type of Sorting:\n1. In Ascending Order\n2. In Descending Order\n");
			scanf("%d",&cs3);
			if(cs3 == 1){		//insertion sort-artan
			  int c, n[10]; 
		
			printf("Randomly generated numbers :\n");

			  for (c = 0; c < 10; c++) {
			    n[c] = rand() % 100 + 1;
				printf(" %d	", n[c]);
			  }
			printf("\n");
			  
			int tmp4, j, i;  
			for(i=1; i<10; i++){
	        tmp4 = n[i];
	        j = i;
	        while(j > 0 && tmp4 < n[j-1]){
	            n[j] = n[j-1];
	            j--;
	        }
	        n[j] = tmp4;
	    }
			  
			printf("Sorted numbers :\n");
    		for (i = 0; i < 10; i++)
		    printf(" %d	", n[i]);	
		    break;
			}
			
			if(cs3 == 2){		//insertion sort-azalan
			  int c, n[10]; 
		
			printf("Randomly generated numbers :\n");

			  for (c = 0; c < 10; c++) {
			    n[c] = rand() % 100 + 1;
				printf(" %d	", n[c]);
			  }
			printf("\n");		  
			  
			int tmp4, j, i;  
			for(i=1; i<10; i++){
	        tmp4 = n[i];
	        j = i;
	        while(j > 0 && tmp4 > n[j-1]){
	            n[j] = n[j-1];
	            j--;
	        }
	        n[j] = tmp4;
	    }
			
			printf("Sorted numbers :\n");
    		for (i = 0; i < 10; i++)
		    printf(" %d	", n[i]);	
			break;
			}

case 4:		//*****************************************SHELL SORT********************************************
			printf("The type of Sorting:\n1. In Ascending Order\n2. In Descending Order\n");
			scanf("%d",&cs4);
			if(cs4 == 1){	//shell sort-artan
			  int c, n[10]; 
		
			printf("Randomly generated numbers :\n");

			  for (c = 0; c < 10; c++) {
			    n[c] = rand() % 100 + 1;
				printf(" %d	", n[c]);
			  }
			printf("\n");	  
			  
			int flag,i,j,tmp5;
   			 for(flag=10/2;flag>0;flag/=2){
      		for(i=flag;i<10;i+=1){
            tmp5=n[i];
            for(j=i;j>=flag&&n[j-flag]>tmp5;j-=flag)
                n[j]=n[j-flag];
            	n[j]=tmp5;
        }
}

	printf("Sorted numbers :\n");
			
    		for (i = 0; i < 10; i++)
		    printf(" %d	", n[i]);	
		    break;	  
			}
			
			else if(cs4 == 2){		//shell sort-azalan
			  int c, n[10]; 
		
			printf("Randomly generated numbers :\n");

			  for (c = 0; c < 10; c++) {
			    n[c] = rand() % 100 + 1;
				printf(" %d	", n[c]);
			  }
			printf("\n");
			
				  
			int flag,i,j,tmp5;
   			 for(flag=10/2;flag>0;flag/=2){
      		for(i=flag;i<10;i+=1){
            tmp5=n[i];
            for(j=i;j>=flag&&n[j-flag]<tmp5;j-=flag)
                n[j]=n[j-flag];
            	n[j]=tmp5;
        }
}
	printf("Sorted numbers :\n");
			
    		for (i = 0; i < 10; i++)
		    printf(" %d	", n[i]);	
		    break;	  
			}
	
	break ;
}
break;
	case 'B' :

	//bubble sort
{
	clock_t start, end;	
	start = clock();

int dizi[50000];
	int i;
	for(i=0; i<50000; i++){
        dizi[i] = rand()%200000;
    }
    
	int tmp6,j;
    for (i=0; i<(50000-1); i++){
        for (j=0; j<50000-i-1; j++){
            if (dizi[j]>dizi[j+1]){
            // küçükten büyüðe sýralama
                tmp6 = dizi[j]; // yer deðiþtirme
                dizi[j] = dizi[j+1];
                dizi[j+1] = tmp6;
            }
		}	}
		
end = clock();
double duration = ((double)end - start)/CLOCKS_PER_SEC;
     
printf("Time taken to execute Bubble Sort Algorithm : %4.3f seconds\n", duration);
}

	//selection sort
{
	clock_t start, end;	
	start = clock();
		
		int dizi[50000],i;
	
	for(i=0; i<50000; i++){
        dizi[i] = rand()%200000;
    }
    
				int a,b;
			int min;
			for (a=0; a<50000; a++){
				min = a;
				for(b = a; b< 50000; b++){
					if (dizi[b] < dizi[min]){
					min = b;
					}
				}
				int temp = dizi[a];
				dizi[a] = dizi[min];
				dizi[min] = temp;
			}
	

end = clock();
double duration = ((double)end - start)/CLOCKS_PER_SEC;

printf("Time taken to execute Selection Sort Algorithm : %4.3f seconds\n", duration);

}
	//insertion sort
{	
	clock_t start, end;	
	start = clock();
		int dizi[50000],i;
	
	for(i=0; i<50000; i++){
        dizi[i] = rand()%200000;
    }
    
			int tmp4,j;
			for(i=1; i<50000; i++){
	        tmp4 = dizi[i];
	        j = i;
	        while(j > 0 && tmp4 < dizi[j-1]){
	            dizi[j] = dizi[j-1];
	            j--;
	        }
	        dizi[j] = tmp4;
	    }

end = clock();
double duration = ((double)end - start)/CLOCKS_PER_SEC;
     
printf("Time taken to execute Insertion Sort Algorithm : %4.3f seconds\n", duration);
}
	//shell sort
{
	clock_t start, end;	
	start = clock();
	int dizi[50000],i,j;
	
	for(i=0; i<50000; i++){
        dizi[i] = rand()%200000;
    }
		
			int flag,tmp5;
   			for(flag=5;flag>0;flag/=2){
      		for(i=flag; i<50000; i+=1){
            tmp5=dizi[i];
            for(j=i;j>=flag&&dizi[j-flag]>tmp5;j-=flag)
                dizi[j]=dizi[j-flag];
            	dizi[j]=tmp5;
        }
}

end = clock();
double duration = ((double)end - start)/CLOCKS_PER_SEC;
     
printf("Time taken to execute Shell Sort Algorithm : %4.3f seconds\n", duration);
}

}
	return 0;
	}
