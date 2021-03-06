/*
 * this file is part of libwaive.
 *
 * Copyright (c) 2015 Dima Krasner
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _WAIVE_H_INCLUDED
#	define _WAIVE_H_INCLUDED

enum waive_flags {
	WAIVE_INET		= 1 << 0,
	WAIVE_UN		= 1 << 1,
	WAIVE_PACKET	= 1 << 2,
	WAIVE_MOUNT		= 1 << 3,
	WAIVE_OPEN		= 1 << 4,
	WAIVE_EXEC		= 1 << 5,
	WAIVE_CLONE		= 1 << 6,
	WAIVE_KILL		= 1 << 7,
	WAIVE_PIPE		= 1 << 8,
	WAIVE_SOCKET	= 1 << 9
};

int waive(const int flags);

#endif
