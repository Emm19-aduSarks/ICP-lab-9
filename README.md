# ICP-lab-9
# Description of your solution to the problem:
We instantiated the multidimensional array as required: A[101][101]
For the populate array method, we created a for loop to loop through 
the instantiated array, and fill it with random integers, using the rand() function.
For the searchValidEntries function, we used a for loop to iterate over each index and 
print it out.

# Pseudocode:
void searchValidEntries(int XL , int YL, int XH, int YH, int A[101][101]){
    for i = XL to i = XH+1 do
        for j = YL to j = YH+1 dp
            cout << "["<< i<< "," << j<< "]" << " counts: "<< A[i][j] << endl;
}

//B) populateArray function
void populateArray(int A[101][101], int N){
    int count = 0;
    srand(time(0));
    for (int i = (rand() % 100) + 1; i < 100; i++)
    for i = rand() % 100+1 to i < 100 do
        for (int j = (rand() % 100) + 1; j< 100; j++)
        for j = rand()%100+1 to j < 100 do
            if (count != N)
                count++;
                A[i][j] += 1;
            }
            
# Listing the response as required for each input of the bounding box:
[80,1] : 0                                                                 
[80,2] : 0                                                                 
[80,3] : 0                                                                 
[80,4] : 0                                                                 
[80,5] : 0                                                                 
[80,6] : 0                                                                 
[80,7] : 0                                                                 
[80,8] : 0                                                                 
[80,9] : 0                                                                 
[80,10] : 0                                                                
[81,1] : 2                                                              
[81,2] : 0                                                                 
[81,3] : 0                                                                 
[81,4] : 0                                                                 
[81,5] : 0                                                                 
[81,6] : 0                                                                 
[81,7] : 0                                                                 
[81,8] : 0                                                                 
[81,9] : 0                                                                 
[81,10] : 0                                                                
[82,1] : 1                                                           
[82,2] : 1
[91,5] : 0                                                                 
[91,6] : 0                                                                 
[91,7] : 0                                                                 
[91,8] : 0                                                                 
[91,9] : 0                                                                 
[91,10] : 0                                                                
[92,1] : 0                                                                 
[92,2] : 0                                                                 
[92,3] : 0                                                                 
[92,4] : 0                                                                 
[92,5] : 0                                                                 
[92,6] : 0                                                                 
[92,7] : 0                                                                 
[92,8] : 0                                                                 
[92,9] : 0                                                                 
[92,10] : 0                                                                
[93,1] : 0                                                                 
[93,2] : 0                                                                 
[93,3] : 0                                                                 
[93,4] : 0                                                                 
[93,5] : 0                                                                 
[93,6] : 0   
[92,1] : 0                                                                 
[92,2] : 0                                                                 
[92,3] : 0                                                                 
[92,4] : 0                                                                 
[92,5] : 0                                                                 
[92,6] : 0                                                                 
[92,7] : 0                                                                 
[92,8] : 0                                                                 
[92,9] : 0                                                                 
[92,10] : 0                                                                
[93,1] : 0                                                                 
[93,2] : 0                                                                 
[93,3] : 0                                                                 
[93,4] : 0                                                                 
[93,5] : 0                                                                 
[93,6] : 0    
[99,3] : 0                                                                 
[99,4] : 0                                                                 
[99,5] : 0                                                                 
[99,6] : 0                                                                 
[99,7] : 0                                                                 
[99,8] : 0                                                                 
[99,9] : 0                                                                 
[99,10] : 0                                                                
[100,1] : 0                                                                
[100,2] : 0                                                                
[100,3] : 0                                                                
[100,4] : 0                                                                
[100,5] : 0                                                                
[100,6] : 0                                                                
[100,7] : 0                                                                
[100,8] : 0                                                                
[100,9] : 0                                                                
[100,10] : 0                                                               
                 
