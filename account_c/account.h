//////////////////////////////////////////////////////////////////////////////
//                                                                          //
//            Notes aimed for, but not limited to, C++ programmers          //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////
// Our "private data members" are hidden away in 'account.c'.               //
//**************************************************************************//
// Our initializer and cleanup functions will be alternatives to            //
// constructors and destructors; We'll have to explicitly call them every   //
// time we use them.                                                        //
//**************************************************************************//
// C supports neither function overloading nor namespaces. If your program  //
// gets big, you may have to append a struct name prefix to functions to    //
// avoid name collisions.                                                   //
//**************************************************************************//
// Notice the extra 'const' in 'getBalance', this is like a constant        //
// member function such as:                                                 //
//                                                                          //
//         int getBalance() const;                                          //
//                                                                          //
// If you're unfamiliar with using 'const' with pointers, then this should  //
// be a good resource: https://www.youtube.com/watch?v=7arYbAhu0aw          //
//////////////////////////////////////////////////////////////////////////////

#pragma once

typedef struct Account Account;

// initializer and cleanup functions
Account* new_Account();
void delete(Account* this);

// transformer functions
void deposit(Account* const this, int amount);
void withdraw(Account* const this, int amount);

// observer functions
int getBalance(const Account* const this);
int Account_getCount();
