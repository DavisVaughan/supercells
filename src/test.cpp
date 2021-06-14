// #include "cpp11.hpp"
// #include <comat.h>
// // [[Rcpp::depends(comat)]]
// using namespace cpp11;
//
//
// [[cpp11::register]]
// Rcpp::NumericVector fun(integers_matrix x, arma::imat d, std::vector<int> classes){
//   Rcpp::IntegerMatrix y = comat::rcpp_get_coma_internal(Rcpp::wrap(x), d, classes);
//   return comat::rcpp_get_cove(y, FALSE, "pdf");
// }
//
//
// /*** R
// fun(matrix(1:9, nrow = 3), matrix(4), classes = 1:9)
// */
//


//
// void Slic::generate_supermotifels(integers mat, doubles_matrix vals, double step, double nc, std::string& type, int iter){
//   // cout << "generate_supermotifels" << endl;
//   this->step = step;
//   this->nc = nc;
//   this->ns = step;
  // int w = 5; /*window size*/
  // int w_side = (w - 1) / 2;
//
//   Rprintf("Initialization: ");
//   /* Clear previous data (if any), and re-initialize it. */
//   clear_data();
//   inits(mat, vals, type);
//   Rprintf("Completed\n");
//
//   /* Run EM for 10 iterations (as prescribed by the algorithm). */
//   for (int itr = 0; itr < iter; itr++) {
//     Rprintf("Iteration: %u/%u\r", itr + 1, iter);
//     // cout << "Iteration: " << itr + 1;
//
//     /* Clean window */
//     window = doubles_matrix(w, w);
//
//     /* Reset distance values. */
//     for (int i = 0; i < mat_dims[1]; i++) {
//       for (int j = 0; j < mat_dims[0]; j++) {
//         distances[i][j] = FLT_MAX;
//       }
//     }
//     for (int l = 0; l < (int) centers.size(); l++) {
//       /* Only compare to pixels in a 2 x step by 2 x step region. */
//       int wc = 0;
//       for (int m = centers[l][1] - step; m < centers[l][1] + step; m++) {
//         int wr = 0;
//         for (int n = centers[l][0] - step; n < centers[l][0] + step; n++) {
//           if (m >= 0 && m < mat_dims[1] && n >= 0 && n < mat_dims[0]) {
//
//             for (int w_col = m - w_side; w_col < m + w_side; w_col++){
//               for (int w_row = n - w_side; w_row < n + w_side; w_row++){
//                 if (w_col >= 0 && w_col < mat_dims[1] && w_row >= 0 && w_row < mat_dims[0]) {
//                   int ncell = w_col + (w_row * mat_dims[1]);
//                   window(wr, wc) = vals(ncell, 0);
//                 }
//
//               }
//             }
//
//             double d = compute_dist(l, n, m, colour, type);
//
//             /* Update cluster allocation if the cluster minimizes the
//              distance. */
//             if (d < distances[m][n]) {
//               distances[m][n] = d;
//               clusters[m][n] = l;
//             }
//             wr++;
//           }
//           wc++;
//         }
//
//
//
//       }
//     }
//   }
// }
// // Rprintf("\r");
// // cout << "\r";
// }
// // cout << endl;
//
// /* Clear the center values. */
// /* Clear the center _vals values. */
// for (int m = 0; m < (int) centers.size(); m++) {
//   centers[m][0] = centers[m][1] = 0;
//   for (int n = 0; n < (int) centers_vals[0].size(); n++){
//     centers_vals[m][n] = 0;
//   }
//   center_counts[m] = 0;
// }
//
// // /* Compute the new cluster centers. */
// for (int l = 0; l < mat_dims[1]; l++) {
//   for (int k = 0; k < mat_dims[0]; k++) {
//     int c_id = clusters[l][k];
//
//     if (c_id != -1) {
//       int ncell = l + (k * mat_dims[1]);
//
//       vector<double> colour; colour.reserve(mat_dims[2]);
//       for (int nval = 0; nval < mat_dims[2]; nval++){
//         double val = vals(ncell, nval);
//         colour.push_back(val);
//       }
//       centers[c_id][0] += k;
//       centers[c_id][1] += l;
//       for (int nval = 0; nval < mat_dims[2]; nval++){
//         centers_vals[c_id][nval] += colour[nval];
//       }
//       center_counts[c_id] += 1;
//     }
//   }
// }
// // /* Normalize the clusters. */
// for (int l = 0; l < (int) centers.size(); l++) {
//   centers[l][0] /= center_counts[l];
//   centers[l][1] /= center_counts[l];
//   for (int nval = 0; nval < mat_dims[2]; nval++){
//     centers_vals[l][nval] /= center_counts[l];
//   }
// }
// }
// Rprintf("\n");
// }
