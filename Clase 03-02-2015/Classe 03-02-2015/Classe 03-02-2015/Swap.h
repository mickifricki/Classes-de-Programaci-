#ifndef _SWAP_H_
#define _SWAP_H_

#define min(a,b) ((a) < (b) ? (a) : (b)) //si a és més petit que b torna a, sino b.
#define max(a,b) ((a) > (b) ? (a) : (b)) //si a és més gran que b torna a, sino b.

template< class TIPUS>
void swap(TIPUS a, TIPUS b)// En c++
{
	TIPUS tmp;
	tmp = a;
	a = b;
	b = tmp;
}



#endif // _SWAP_H_