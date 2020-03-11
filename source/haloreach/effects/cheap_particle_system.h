#pragma once

#include <cseries/cseries.h>
#include <math/real_math.h>
#include <tag_files/tag_groups.h>

/* ---------- constants */

enum
{
	k_cheap_particle_emitter_group_tag = 'cpem',
	k_cheap_particle_type_library_group_tag = 'cptl',
};

/* ---------- types */

struct s_cheap_particle_emitter
{
	// TODO
};

struct s_cheap_particle_type_library
{
	// TODO
};

struct s_scenario_cheap_particle_emitter_palette_entry
{
	s_tag_reference definition;
};
static_assert(sizeof(s_scenario_cheap_particle_emitter_palette_entry) == 0x10);

struct s_scenario_cheap_particle_system
{
	c_tag_block_index<s_scenario_cheap_particle_emitter_palette_entry, short> palette_index;
	short : 16;
	s_real_point3d position;
	s_real_euler_angles3d rotation;
};
static_assert(sizeof(s_scenario_cheap_particle_system) == 0x1C);