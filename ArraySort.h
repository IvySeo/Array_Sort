/*This program is dealing with Merge Sort and Quick Sort. This project implements these algorithms and O(n2). This investigation should confirm our theoretical observations about their behaviors.
This program is to observe how the algorithms' times, as represented by the counts of characteristic operations, increase as the number of values being sorted grows, by running the program on several instances of several problem sizes. Which is numbers of values to sort. 
This system for the number of characteristic operations each performs in sorting the random or same values. 
*/

    int A[value_MAX];
    int B[value_MAX];
    int C[value_MAX];
    int value;
    char out;
    int seed;
    Sort Merge;
    Sort Quick;
    Sort I;

    cout<<"Enter the value of values to generate and sort , between 1 and 5000:"<<endl;
    cin>>value;  
    cout<<"Enter an integer seed value :"<<endl;
    cin>>seed;
    srand(seed);

    
    for (int i=0; i<value;i++)
    {
        A[i]=(rand()%5000)+1;
        B[i]=A[i];
        C[i]=B[i];
    }
    M.SortMerge ( A, 0, value) ;
    Q.SortQuick ( B, 0, value);

    I.SortInsert(C, value);
    cout<<"Print the values?"<<endl;

    cin>>out;
    if(out=='Y'|| out=='y')
    { 
        cout<<"Array: Merge Sort::"<<endl;
        for(int m=1; m<=value; m++)
        {
            cout<<A[m]<<" ";
        }
    
        cout<<endl<<"Array: Quick Sort::"<<endl;
        for(int q=1; q<=value; q++)
        {
           cout<<B[q]<<" ";
        }
        cout<<endl<<"Array: Insertion Sort::"<<endl;
        for(int i=1; i<=value; i++)
        {
             cout<<C[i]<<" ";
        }
    }
    cout<<" Count Merge Sort = "<<Merge.size()<<endl;
    cout<<"Count Quick Sort = "<<Quick.size()<<endl;
    cout<<"Count Insertion Sort = "<<I.size()<<endl;

	return 0;



