/*
 * Copyright (C) 2005-2011 MaNGOS <http://getmangos.com/>
 * Copyright (C) 2009-2011 MaNGOSZero <https://github.com/mangos/zero>
 * Copyright (C) 2011-2016 Nostalrius <https://nostalrius.org>
 * Copyright (C) 2016-2017 Elysium Project <https://github.com/elysium-project>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef CREATUREAIIMPL_H
#define CREATUREAIIMPL_H

#include "CreatureAI.h"
#include "Common.h"
#include "Util.h"

template<class REAL_AI>
inline CreatureAI*
CreatureAIFactory<REAL_AI>::Create(void *data) const
{
    Creature* creature = reinterpret_cast<Creature* >(data);
    return (new REAL_AI(creature));
}


// TrinityCore

template<class T>
inline
T const& RAND(T const& v1, T const& v2)
{
    return (urand(0,1)) ? v1 : v2;
}

template<class T>
inline
T const& RAND(T const& v1, T const& v2, T const& v3)
{
    switch (urand(0,2))
    {
        default:
        case 0: return v1;
        case 1: return v2;
        case 2: return v3;
    }
}

template<class T>
inline
T const& RAND(T const& v1, T const& v2, T const& v3, T const& v4)
{
    switch (urand(0,3))
    {
        default:
        case 0: return v1;
        case 1: return v2;
        case 2: return v3;
        case 3: return v4;
    }
}

template<class T>
inline
T const& RAND(T const& v1, T const& v2, T const& v3, T const& v4, T const& v5)
{
    switch (urand(0,4))
    {
        default:
        case 0: return v1;
        case 1: return v2;
        case 2: return v3;
        case 3: return v4;
        case 4: return v5;
    }
}

template<class T>
inline
T const& RAND(T const& v1, T const& v2, T const& v3, T const& v4, T const& v5, T const& v6)
{
    switch (urand(0,5))
    {
        default:
        case 0: return v1;
        case 1: return v2;
        case 2: return v3;
        case 3: return v4;
        case 4: return v5;
        case 5: return v6;
    }
}

template<class T>
inline
T const& RAND(T const& v1, T const& v2, T const& v3, T const& v4, T const& v5, T const& v6, T const& v7)
{
    switch (urand(0,6))
    {
        default:
        case 0: return v1;
        case 1: return v2;
        case 2: return v3;
        case 3: return v4;
        case 4: return v5;
        case 5: return v6;
        case 6: return v7;
    }
}

template<class T>
inline
T const& RAND(T const& v1, T const& v2, T const& v3, T const& v4, T const& v5, T const& v6, T const& v7, T const& v8)
{
    switch (urand(0,7))
    {
        default:
        case 0: return v1;
        case 1: return v2;
        case 2: return v3;
        case 3: return v4;
        case 4: return v5;
        case 5: return v6;
        case 6: return v7;
        case 7: return v8;
    }
}

template<class T>
inline
T const& RAND(T const& v1, T const& v2, T const& v3, T const& v4, T const& v5, T const& v6, T const& v7, T const& v8,
              T const& v9)
{
    switch (urand(0,8))
    {
        default:
        case 0: return v1;
        case 1: return v2;
        case 2: return v3;
        case 3: return v4;
        case 4: return v5;
        case 5: return v6;
        case 6: return v7;
        case 7: return v8;
        case 8: return v9;
    }
}

template<class T>
inline
T const& RAND(T const& v1, T const& v2, T const& v3, T const& v4, T const& v5, T const& v6, T const& v7, T const& v8,
              T const& v9, T const& v10)
{
    switch (urand(0,9))
    {
        default:
        case 0: return v1;
        case 1: return v2;
        case 2: return v3;
        case 3: return v4;
        case 4: return v5;
        case 5: return v6;
        case 6: return v7;
        case 7: return v8;
        case 8: return v9;
        case 9: return v10;
    }
}

template<class T>
inline
T const& RAND(T const& v1, T const& v2, T const& v3, T const& v4, T const& v5, T const& v6, T const& v7, T const& v8,
              T const& v9, T const& v10, T const& v11)
{
    switch (urand(0,10))
    {
        default:
        case 0: return v1;
        case 1: return v2;
        case 2: return v3;
        case 3: return v4;
        case 4: return v5;
        case 5: return v6;
        case 6: return v7;
        case 7: return v8;
        case 8: return v9;
        case 9: return v10;
        case 10: return v11;
    }
}

template<class T>
inline
T const& RAND(T const& v1, T const& v2, T const& v3, T const& v4, T const& v5, T const& v6, T const& v7, T const& v8,
              T const& v9, T const& v10, T const& v11, T const& v12)
{
    switch (urand(0,11))
    {
        default:
        case 0: return v1;
        case 1: return v2;
        case 2: return v3;
        case 3: return v4;
        case 4: return v5;
        case 5: return v6;
        case 6: return v7;
        case 7: return v8;
        case 8: return v9;
        case 9: return v10;
        case 10: return v11;
        case 11: return v12;
    }
}

template<class T>
inline
T const& RAND(T const& v1, T const& v2, T const& v3, T const& v4, T const& v5, T const& v6, T const& v7, T const& v8,
              T const& v9, T const& v10, T const& v11, T const& v12, T const& v13)
{
    switch (urand(0,12))
    {
        default:
        case 0: return v1;
        case 1: return v2;
        case 2: return v3;
        case 3: return v4;
        case 4: return v5;
        case 5: return v6;
        case 6: return v7;
        case 7: return v8;
        case 8: return v9;
        case 9: return v10;
        case 10: return v11;
        case 11: return v12;
        case 12: return v13;
    }
}

template<class T>
inline
T const& RAND(T const& v1, T const& v2, T const& v3, T const& v4, T const& v5, T const& v6, T const& v7, T const& v8,
              T const& v9, T const& v10, T const& v11, T const& v12, T const& v13, T const& v14)
{
    switch (urand(0,13))
    {
        default:
        case 0: return v1;
        case 1: return v2;
        case 2: return v3;
        case 3: return v4;
        case 4: return v5;
        case 5: return v6;
        case 6: return v7;
        case 7: return v8;
        case 8: return v9;
        case 9: return v10;
        case 10: return v11;
        case 11: return v12;
        case 12: return v13;
        case 13: return v14;
    }
}

template<class T>
inline
T const& RAND(T const& v1, T const& v2, T const& v3, T const& v4, T const& v5, T const& v6, T const& v7, T const& v8,
              T const& v9, T const& v10, T const& v11, T const& v12, T const& v13, T const& v14, T const& v15)
{
    switch (urand(0,14))
    {
        default:
        case 0: return v1;
        case 1: return v2;
        case 2: return v3;
        case 3: return v4;
        case 4: return v5;
        case 5: return v6;
        case 6: return v7;
        case 7: return v8;
        case 8: return v9;
        case 9: return v10;
        case 10: return v11;
        case 11: return v12;
        case 12: return v13;
        case 13: return v14;
        case 14: return v15;
    }
}

template<class T>
inline
T const& RAND(T const& v1, T const& v2, T const& v3, T const& v4, T const& v5, T const& v6, T const& v7, T const& v8,
              T const& v9, T const& v10, T const& v11, T const& v12, T const& v13, T const& v14, T const& v15, T const& v16)
{
    switch (urand(0,15))
    {
        default:
        case 0: return v1;
        case 1: return v2;
        case 2: return v3;
        case 3: return v4;
        case 4: return v5;
        case 5: return v6;
        case 6: return v7;
        case 7: return v8;
        case 8: return v9;
        case 9: return v10;
        case 10: return v11;
        case 11: return v12;
        case 12: return v13;
        case 13: return v14;
        case 14: return v15;
        case 15: return v16;
    }
}

#endif
