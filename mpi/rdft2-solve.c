/*
 * Copyright (c) 2003, 2007-8 Matteo Frigo
 * Copyright (c) 2003, 2007-8 Massachusetts Institute of Technology
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
 *
 */

#include "mpi-rdft2.h"

/* use the apply() operation for MPI_RDFT2 problems */
void XM(rdft2_solve)(const plan *ego_, const problem *p_)
{
     const plan_mpi_rdft2 *ego = (const plan_mpi_rdft2 *) ego_;
     const problem_mpi_rdft2 *p = (const problem_mpi_rdft2 *) p_;
     ego->apply(ego_, UNTAINT(p->I), UNTAINT(p->O));
}
