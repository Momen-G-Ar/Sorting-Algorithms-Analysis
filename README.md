# Sorting algorithim Run time Analysis - Designing and analyzing Algorithms Course project.

Summary: 
    this project was done by us: Momen Arafeh, Tamim Salhab and Mohammad Shweiki and under the instruction of Nabil Arman,PhD as the Designing and analyzing Algorithms Course project, the project aims to test four different sorting algorithms on different randomly generated sets of input and analyze the differences between them to expermient on the theory we have been taking regarding them throughout the course, and get to know whigit ch one is better to use in the average cases of sets of input.
    And the 4 sorting algorithms are:
        1- Merge sort.
        2- Quick sort.
        3- Counting sort.
        4- Insertion sort.

-------------------------------------------------------------------------------------------------------------------------------

Requirements:
    In order to run the project you need just to have c++ installed, version 9 or higher, and simple app to run c++ applications.

-------------------------------------------------------------------------------------------------------------------------------

Features:
    Libraries:
        1- bits/stdc++.h: this library contains a lot of c++ libraries that may need a developer to make programs in c++, like STL data structrues libraries and string and math nad many others.
        2- testlib.h: this an open-source library that contains the (shuffle) function which we used to make the inserted data sets randomised before the sorting to make sure the time needed is accurate and valid.

    main function:

        the main function is used to input the set of integers we need to sort, after inserting it hapeens the follows:
        1- the set of integers gets shuffled using the function from (testlib.h) library we mention earlier.
        2- timer gets initalized in order to estimate the time needed to sort.
        3- then one of the sorting algorithm gets called to sort the data set.
        4- another timer gets initalized to get the time the sorting finished.
        5- the difference between the ending and starting time gets calculated and outputed in the output file.
        6- the process repeats and until the sorting is done using the 4 mentioned algorithm.
        the order of algorithms: Merge sort, Insertion sort, Counting sort, Quick sort.

        *Note: we used a funtion at the starting of the program to make taking the input much faster since there's a huge amount of data expected to get inserted, and made reading and outputing the data through text files not the console to make it easier to use.


    Sorting funtions:

        each sorting algorithm has been implemented in an independent function that calls the dataset and processes and sorts it and the code for each sorting algorithm is standard is we have learnt in the course.
    
-------------------------------------------------------------------------------------------------------------------------------

Contact:
    for any further questions regarding the project you contact us via our E-mails:
        1- Momen Arafeh: cp.momen@gmail.com
        
        2- Tamim Salhab: tamem222333@gmail.com
        
        3- Mohammad Shweiki: mohammadshwiki226@gmail.com
        
