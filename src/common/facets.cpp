#include "facets.hpp"

namespace ear {
  const std::vector<Facet> FACETS_0_5_0 = {
      {16, 13, 14},   {16, 11, 14}, {16, 10, 13},   {8, 5, 15},
      {9, 6, 15},     {8, 9, 15},   {16, 11, 12},   {16, 10, 12},
      {15, 6, 7},     {15, 5, 7},   {3, 4, 13, 14}, {8, 9, 3, 4},
      {1, 11, 4, 14}, {1, 4, 9, 6}, {1, 2, 11, 12}, {1, 2, 6, 7},
      {0, 10, 3, 13}, {0, 8, 3, 5}, {0, 2, 10, 12}, {0, 2, 5, 7},
  };
  const std::vector<Facet> FACETS_2_5_0 = {
      {12, 13, 15},   {13, 6, 15},    {12, 5, 15},   {2, 5, 6},
      {5, 6, 15},     {10, 14, 7},    {8, 11, 14},   {10, 11, 14},
      {1, 2, 6},      {8, 9, 14},     {9, 14, 7},    {0, 2, 5},
      {4, 3, 12, 13}, {3, 10, 11, 4}, {1, 4, 13, 6}, {8, 1, 11, 4},
      {8, 9, 2, 1},   {0, 3, 12, 5},  {0, 10, 3, 7}, {0, 9, 2, 7},
  };
  const std::vector<Facet> FACETS_4_5_0 = {
      {8, 15, 7},     {8, 6, 15},     {15, 5, 7},    {2, 5, 6},
      {5, 6, 15},     {9, 12, 14},    {10, 13, 14},  {12, 13, 14},
      {1, 2, 6},      {10, 11, 14},   {9, 11, 14},   {0, 2, 5},
      {8, 3, 4, 7},   {12, 3, 4, 13}, {8, 1, 4, 6},  {1, 10, 4, 13},
      {2, 1, 10, 11}, {0, 3, 5, 7},   {0, 9, 3, 12}, {0, 9, 2, 11},
  };
  const std::vector<Facet> FACETS_4_5_1 = {
      {10, 11, 12}, {8, 13, 7},     {8, 13, 6},   {13, 5, 7},   {2, 5, 6},
      {13, 5, 6},   {9, 11, 12},    {9, 10, 12},  {0, 10, 3},   {0, 9, 10},
      {0, 2, 5},    {0, 9, 2},      {1, 11, 9},   {1, 11, 4},   {1, 2, 6},
      {1, 2, 9},    {3, 10, 11, 4}, {8, 3, 4, 7}, {0, 3, 5, 7}, {8, 1, 4, 6},
  };
  const std::vector<Facet> FACETS_3_7_0 = {
      {9, 5, 7},      {17, 11, 13},   {17, 10, 11},   {17, 10, 12},
      {16, 17, 15},   {17, 13, 15},   {17, 12, 14},   {16, 17, 14},
      {8, 9, 7},      {8, 9, 6},      {0, 1, 3},      {1, 3, 5},
      {9, 3, 5},      {0, 2, 4},      {0, 3, 4},      {9, 3, 4},
      {2, 4, 6},      {9, 4, 6},      {1, 5, 11, 13}, {0, 1, 10, 11},
      {0, 10, 2, 12}, {5, 7, 13, 15}, {2, 12, 14, 6}, {8, 16, 7, 15},
      {8, 16, 14, 6},
  };
  const std::vector<Facet> FACETS_4_9_0 = {
      {8, 2, 7},       {8, 23, 7},     {16, 13, 22},    {0, 3, 7},
      {17, 14, 22},    {8, 1, 4},      {9, 3, 5},       {9, 3, 7},
      {9, 23, 7},      {2, 11, 7},     {0, 11, 7},      {17, 19, 22},
      {8, 2, 12},      {8, 1, 12},     {20, 13, 22},    {20, 22, 15},
      {18, 19, 22},    {16, 18, 22},   {21, 14, 22},    {21, 22, 15},
      {9, 10, 23},     {10, 4, 6},     {8, 10, 4},      {8, 10, 23},
      {0, 16, 3, 13},  {1, 4, 17, 14}, {0, 11, 20, 13}, {2, 11, 20, 15},
      {16, 18, 3, 5},  {18, 19, 5, 6}, {17, 19, 4, 6},  {1, 12, 21, 14},
      {2, 12, 21, 15}, {9, 10, 5, 6},
  };
  const std::vector<Facet> FACETS_9_10_3 = {
      {16, 13, 14},   {17, 13, 15},   {18, 13, 14},   {18, 13, 15},
      {25, 27, 22},   {26, 27, 23},   {24, 27, 22},   {24, 27, 23},
      {16, 10, 13},   {17, 11, 13},   {25, 27, 20},   {26, 27, 21},
      {10, 12, 13},   {11, 12, 13},   {2, 12, 5},     {10, 12, 5},
      {0, 25, 8},     {0, 25, 20},    {0, 20, 5},     {0, 10, 5},
      {0, 16, 8},     {0, 16, 10},    {27, 19, 20},   {27, 19, 21},
      {2, 19, 5},     {19, 20, 5},    {2, 12, 6},     {11, 12, 6},
      {2, 19, 6},     {19, 21, 6},    {1, 26, 9},     {1, 26, 21},
      {1, 21, 6},     {1, 11, 6},     {1, 17, 9},     {1, 11, 17},
      {16, 8, 3, 14}, {8, 25, 3, 22}, {18, 3, 14, 7}, {17, 4, 9, 15},
      {9, 26, 4, 23}, {18, 4, 15, 7}, {24, 3, 22, 7}, {24, 4, 7, 23},
  };
  const std::vector<Facet> FACETS_0_7_0 = {
      {17, 14, 22},   {18, 22, 15},   {16, 14, 22},   {16, 22, 15},
      {10, 21, 7},    {8, 11, 21},    {9, 21, 7},     {8, 9, 21},
      {17, 19, 22},   {21, 11, 13},   {21, 12, 13},   {10, 12, 21},
      {18, 20, 22},   {19, 20, 22},   {0, 17, 3, 14}, {0, 10, 3, 7},
      {0, 16, 2, 14}, {1, 18, 4, 15}, {8, 1, 11, 4},  {16, 1, 2, 15},
      {0, 9, 2, 7},   {8, 9, 2, 1},   {3, 17, 19, 5}, {10, 3, 12, 5},
      {13, 12, 5, 6}, {11, 4, 13, 6}, {18, 20, 4, 6}, {19, 20, 5, 6},
  };
  const std::vector<Facet> FACETS_4_7_0 = {
      {8, 2, 7},      {8, 19, 7},     {18, 11, 14},   {0, 3, 7},
      {0, 2, 7},      {18, 12, 15},   {8, 1, 4},      {8, 1, 2},
      {18, 11, 13},   {18, 12, 13},   {9, 3, 5},      {9, 3, 7},
      {9, 19, 7},     {17, 18, 15},   {16, 17, 18},   {16, 18, 14},
      {9, 10, 19},    {10, 4, 6},     {8, 10, 4},     {8, 10, 19},
      {0, 3, 11, 14}, {1, 12, 4, 15}, {0, 2, 11, 13}, {1, 2, 12, 13},
      {16, 3, 5, 14}, {16, 17, 5, 6}, {17, 4, 6, 15}, {9, 10, 5, 6},
  };

  const std::map<std::string, std::vector<Facet>> FACETS = {
      {"0+5+0", FACETS_0_5_0},   {"2+5+0", FACETS_2_5_0},
      {"4+5+0", FACETS_4_5_0},   {"4+5+1", FACETS_4_5_1},
      {"3+7+0", FACETS_3_7_0},   {"4+9+0", FACETS_4_9_0},
      {"9+10+3", FACETS_9_10_3}, {"0+7+0", FACETS_0_7_0},
      {"4+7+0", FACETS_4_7_0},
  };
}  // namespace ear
