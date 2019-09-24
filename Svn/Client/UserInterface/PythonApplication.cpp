///Add
#if defined(EVENT_HANDLER_MASTER)
	#include "EventHandler.h"
#endif

//Find
	s_uiLoad += ELTimer_GetMSec() - dwStart;
	
///Add
#if defined(EVENT_HANDLER_MASTER)
	EventHandler::Instance().Proccess();
#endif