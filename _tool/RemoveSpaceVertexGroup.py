import bpy
v_groups = bpy.context.active_object.vertex_groups;
for vertexgrp in v_groups:
    vertexgrp.name = vertexgrp.name if not ' ' in vertexgrp.name else vertexgrp.name.replace(" ", "_")