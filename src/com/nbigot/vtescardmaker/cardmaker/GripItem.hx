package com.nbigot.vtescardmaker.cardmaker;

import nbigot.utils.SpriteUtils;
import openfl.display.Sprite;

/**
 * ...
 * @author 
 */
class GripItem extends Sprite 
{

	public function new() 
	{
		super();
		var toto:Sprite =  SpriteUtils.createCircle( 20, 0x00ff00);
		toto.alpha = 0.1;
		toto.x = -10;
		toto.y = -10;
		addChild(toto);
		SpriteUtils.drawSquareBorder(this, 8, 8, 0,1,-4,-4);
	}
	
}