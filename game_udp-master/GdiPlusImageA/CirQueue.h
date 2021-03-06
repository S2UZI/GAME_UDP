//////////////////////////////////////////////////////////////////////
// CirQueue.h
//
//////////////////////////////////////////////////////////////////////

#ifndef _CIRQUEUE_H_
#define _CIRQUEUE_H_

#include "packet.h"

#define QUEUE_SIZE 30000//2048

class CCirQueue  
{
protected:
	      char           *m_pQueue;//[QUEUE_SIZE];
		  int            m_sFront;
		  int            m_sRear;
		  //int			 m_sPop;

protected:


public:
	   CCirQueue();
	   virtual ~CCirQueue();

	   void ClearQueue() { InitQueue(); }
	   void InitQueue();
	   void InitZeroQueue();

	   int OnPutData(char *pData, short recvsize);
	   void OnPopData(short popsize);

	   PACKETHEADER *GetPacket();
};

#endif
