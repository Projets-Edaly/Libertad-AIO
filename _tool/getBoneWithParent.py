import bpy

output = ""
for armature in [ob for ob in bpy.data.objects if ob.type == 'ARMATURE']:
    for bone in armature.data.bones:
        output += ('\"%s\", "%s",\n' %(bone.name, bone.parent.name if bone.parent else ""))

bpy.context.window_manager.clipboard = output
