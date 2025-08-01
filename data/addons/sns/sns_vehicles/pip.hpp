		class RenderTargets /// class for all Picture-in-Picture (PiP)
		{
			class LeftMirror
			{
				BBoxes[]	= {"pip1","pip2","pip3","pip4"};
				renderTarget = "rendertarget0"; /// what texture is going to be used, it should be mapped in model like #(argb,256,512,1)r2t(rendertarget0,1.0)
				class CameraView1
				{
					pointPosition		= "pip0_pos"; 	/// memory point of PiP origin
					pointDirection		= "pip0_dir"; 	/// memory point of PiP direction
					renderQuality 		= 2;			/// what quality should the PiP be
					renderVisionMode 	= 0;			/// zero means standard vision
					fov 				= 1;			/// what is the angle of the PiP field of view
				}; 			
			};
		};
