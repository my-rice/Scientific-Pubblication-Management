# Scientific-Pubblication-Management
## Exercise description
Write a program for managing the scientific publications of a research group. Each publication can be of four types:
- International Journal (RI);
- National Magazine (RN);
- International Conference (CI);
- National Conference (CN).

## Data structure
The data relating to each publication are:
- ISBN (A string of 8 characters), key field.
- Topology of the publication (RI / RN / CI / CN).
- Title of the publication (A string of 50 characters)
- Surname of the main author (A string of 15 characters)
- Year of publication (A 4-character string)
- Number of authors of the publication (One integer)

## Tasks
The program stores the data relating to the publications in a binary tree, sorted according to the key, and performs the following functions:

- Inserting a new publication. (Functionality already provided)
- Calculation of the average number of authors per publication.
- Search for the publication with the highest number of authors.
- Search for a publication stored in the archive.
- On-screen printing of publications. (Functionality already provided)

## Given files
For the implementation of the application, the student has at his disposal:
- The files needed to create the entire project;
- The standard functions for the management of the binary tree that must be used without making any changes to them (neither to the prototypes nor to their implementation provided);
- The definition of the prototypes of the functions to be implemented.

The files provided are as follows:

- info.h (to be completed)
Contains the definition of the TInfo type and the prototypes of the functions for its management. The student will have to build the SSatellite structure;

- info.c (not to be changed)
Contains the implementation of the functions for the management of TInfo.

- tree.h (not to be modified)
Contains the definition of the TTree type and the prototypes of the functions for the management of TTree (standard functions)

- tree.c (not to be modified)
Contains the implementation of the TTree management functions (standard functions)

- menu.h (not to be changed)
Contains prototypes of user interface functions.

- menu.c (not to be changed)
Contains the implementation of the user interface functions.

- management_publications.h (not to be modified)
Contains the prototypes of the functions required by the application:
> int insert_ publication (TTree * pub);

- The function reads the TInfo data and inserts a new node in the binary tree. The function returns 1 if the insertion is successful, -1 otherwise. (The function is already provided)
> int compute_authors (TTree pub);

- The function calculates the total number of authors for the publications stored in the archive, in practice it adds up the field relating to the number of authors of all the tree nodes. The function returns the total number of authors present in the archive.
> TNode * search_max_authors (TTree pub);

- The function searches for the publication with the highest number of authors. The function returns the node for the publication with the greatest number of authors. (Recursive).
> TNode * search_publication (TTree pub);

- The function reads the publication's ISBN from the keyboard and searches the tree for the publication with the given ISBN. The function returns the searched node. (Iterative)
> void print_publications (TTree pub);

- The print function, the information of all publications in the archive. The function does not return any value. (The function is already provided)  

- management_ publications.c (to be completed)
Contains the implementation of the functions required by the application

- publications.c (to be completed)  
Contains the main of the program.