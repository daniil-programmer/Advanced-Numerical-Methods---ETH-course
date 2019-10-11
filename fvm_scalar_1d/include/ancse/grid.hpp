#ifndef FVMSCALAR1D_GRID_HPP
#define FVMSCALAR1D_GRID_HPP

#include <utility>

/// A uniform Cartesian Grid in 1D.
/** The physical domain is [a, b], where `auto [a, b] = domain;`. The
 *  ghost-cells, if present, lie outside the physical domain.
 */
struct Grid {
    Grid(std::pair<double, double> domain, int n_cells, int n_ghost);

    std::pair<double, double> domain;
    int n_cells; ///< number of cells, including ghost-cells.
    int n_ghost; ///< number of ghost_cells on either side.
    double dx;   ///< mesh width of a uniform grid
};

/// Compute the center of cell `i`.
double cell_center(const Grid &grid, int i);

#endif // FVMSCALAR1D_GRID_HPP
