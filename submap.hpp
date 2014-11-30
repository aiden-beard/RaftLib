/**
 * submap.hpp - Defines an interface to create sub-mappings
 * which are basically maps that are allowed to have unconnected
 * inputs and/or outputs that will be connected within a main
 * mapping.  
 *
 * @author: Jonathan Beard
 * @version: Sun Nov 30 06:12:23 2014
 * 
 * Copyright 2014 Jonathan Beard
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef _SUBMAP_HPP_
#define _SUBMAP_HPP_  1
#include "mapbase.hpp"

class Map;

class SubMap : public MapBase
{
public:
   SubMap();
   virtual ~SubMap();
protected:
   friend class Map;
};
#endif /* END _SUBMAP_HPP_ */
