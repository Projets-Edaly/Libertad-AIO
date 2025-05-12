import bpy

for armature in [ob for ob in bpy.data.objects if ob.type == 'ARMATURE']:
    print("====================== NEW OBJECT ======================")
    for bone in armature.data.bones:
        print("======================")
        print("Before ", bone.name)
        bone.name = bone.name if not ' ' in bone.name else bone.name.replace(" ", "_")
        print("After ", bone.name)
