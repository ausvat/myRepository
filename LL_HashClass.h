// Precompiler directives /////////////////////////////////////////////////////

#ifndef LL_HASH_CLASS_H
#define LL_HASH_CLASS_H

// Header files ///////////////////////////////////////////////////////////////

#include "SimpleLinkedListClass.h"

// Class constants ////////////////////////////////////////////////////////////

const int DEFAULT_TABLE_CAPACITY = 11;
const int HASH_START_VALUE = 3;

// Class definition ///////////////////////////////////////////////////////////

class LL_HashClass
   {
    public:

       /*
       Name: Default constructor
       Process: creates table with DEFAULT_TABLE_CAPACITY,
                initializes linked list classes
       Method input/parameters: none
       Method output/parameters: none
       Method output/returned: none
       Device input/keyboard: none
       Device output/monitor: none
       Dependencies: SimpleLinkedListClass default constructor
       */
       LL_HashClass();

       /*
       Name: Initialization constructor
       Process: creates new table with given capacity (size)
       Method input/parameters: table capacity (size) (int)
       Method output/parameters: none
       Method output/returned: none
       Device input/keyboard: none
       Device output/monitor: none
       Dependencies: SimpleLinkedListClass default constructor
       */
       LL_HashClass( int newTableSize );

       /*
       Name: Copy constructor
       Process: creates duplicate object from given object
       Method input/parameters: object to be copied (const LL_HashClass &)
       Method output/parameters: none
       Method output/returned: none
       Device input/keyboard: none
       Device output/monitor: none
       Dependencies: SimpleLinkedListClass copy constructor
       */
       LL_HashClass( const LL_HashClass &copied );

       /*
       Name: Destructor
       Process: hash table is deleted
       Method input/parameters: none
       Method output/parameters: none
       Method output/returned: none
       Device input/keyboard: none
       Device output/monitor: none
       Dependencies: delete []
       */
       ~LL_HashClass();

       /*
       Name: addItem
       Process: adds item to hash table
       Method input/parameters: item to be added (const SimpleStudentClass &)
       Method output/parameters: none
       Method output/returned: none
       Device input/keyboard: none
       Device output/monitor: none
       Dependencies: findHashIndex, SimpleLinkedListClass appendItem
       */
       void addItem( const SimpleStudentClass &newItem );

       /*
       Name: removeItem
       Process: removes item from hash table, returns object
       Method input/parameters: student id key (int)
       Method output/parameters: none
       Method output/returned: none
       Device input/keyboard: none
       Device output/monitor: none
       Dependencies: findHashIndex, SimpleLinkedListClass removeItem
       */
       SimpleStudentClass removeItem( int studentIdKey );

       /*
       Name: showHashTableStatus
       Process: displays hash table status for each element/linked list
       Method input/parameters: none
       Method output/parameters: none
       Method output/returned: none
       Device input/keyboard: none
       Device output/monitor: none
       Dependencies: SimpleLinkedListClass countNodes, printf
       */
       void showHashTableStatus();

    private:

       /*
       Name: findHashIndex
       Process: calculates hash index as follows:
                multiplies LSD by 3, then next digit by 9, then next by 27, etc.
                adds all values together and finds index using modulo
       Method input/parameters: student key (int)
       Method output/parameters: none
       Method output/returned: none
       Device input/keyboard: none
       Device output/monitor: none
       Dependencies: none
       */
       int findHashIndex( int studentIdKey );

       // object data
       SimpleLinkedListClass *hashTable;
       int tableSize;
   };

// Terminating precompiler directives  ////////////////////////////////////////

#endif		// LL_HASH_CLASS_H
