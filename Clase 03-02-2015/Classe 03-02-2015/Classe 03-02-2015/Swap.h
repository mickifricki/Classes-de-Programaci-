#ifndef _SWAP_H_
#define _SWAP_H_


template< class TIPUS>
void swap(TIPUS a, TIPUS b)// En c++
{
	TIPUS tmp;
	tmp = a;
	a = b;
	b = tmp;
}

#endif // _SWAP_H_