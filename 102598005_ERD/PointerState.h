#ifndef _POINTERSTATE_H_
#define _POINTERSTATE_H_

#include "state.h"

class PointerState : public State
{
public:
	PointerState(GraphicsManager* scene);
	~PointerState();
	void sendEventToItem( QGraphicsSceneMouseEvent* mouseEvent );
	void mousePressEvent(QGraphicsSceneMouseEvent* mouseEvent);
	void mouseMoveEvent(QGraphicsSceneMouseEvent* mouseEvent);
	void mouseReleaseEvent(QGraphicsSceneMouseEvent* mouseEvent);


};

#endif