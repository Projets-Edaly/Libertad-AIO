import bpy

for obj in bpy.context.selected_objects:
    if obj.type == 'MESH':
        vertex_indices = obj.data.vertices
        group = obj.vertex_groups.new( name = obj.name )
        selected_verts = [v.index for v in obj.data.vertices]
        print(obj.name, selected_verts)
        group.add( selected_verts, 1.0, 'ADD' )
