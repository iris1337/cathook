/*
 * CTooltip.cpp
 *
 *  Created on: Jan 28, 2017
 *      Author: nullifiedcat
 */

#include "CTooltip.h"
#include "../common.h"
#include "../sdk.h"

#include <limits>

CTooltip::CTooltip(IWidget* parent) : CTextLabel("tooltip", parent) {
	SetZIndex(999);
}

void CTooltip::Draw(int x, int y) {
	auto size = GetSize();
	draw::DrawRect(x, y, size.first, size.second, colors::Create(0, 0, 0, 200));
	draw::OutlineRect(x, y, size.first, size.second, colors::pink);
	draw::String(fonts::MENU, x + Props()->GetInt("padding_x"), y + Props()->GetInt("padding_y"), colors::pink, 1, GetText());
}
