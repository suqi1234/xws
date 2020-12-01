using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace LuaFramework {
    public class SoundManager : Manager {
        private AudioSource audio;
        private Hashtable sounds = new Hashtable();
        public static bool isPlaySV = true;
		public static bool isPlayCard = true;
        public static float soundVolume = 1f;
        void Start() {
			audio = GameObject.Find("Canvas").GetComponent<AudioSource>();
            audio.volume = PlayerPrefs.GetInt(AppConst.AppPrefix + "GameBackSound");
            string n=audio.transform.name;
        }

        /// <summary>
        /// 添加一个声音
        /// </summary>
        void Add(string key, AudioClip value) {
            if (sounds[key] != null || value == null) return;
            sounds.Add(key, value);
        }

        /// <summary>
        /// 获取一个声音
        /// </summary>
        AudioClip Get(string key) {
            if (sounds[key] == null) return null;
            return sounds[key] as AudioClip;
        }

        /// <summary>
        /// 载入一个音频
        /// </summary>
        public AudioClip LoadAudioClip(string path) {
            AudioClip ac = Get(path);
            if (ac == null) {
                ac = (AudioClip)Resources.Load(path, typeof(AudioClip));
                Add(path, ac);
            }
            return ac;
        }

        /// <summary>
        /// 是否播放背景音乐，默认是1：播放
        /// </summary>
        /// <returns></returns>
        public bool CanPlayBackSound() {
            string key = AppConst.AppPrefix + "BackSound";
            Debug.Log(key);
            int i = PlayerPrefs.GetInt(key);
            Debug.Log(i);
            return i == 0;
        }

        /// <summary>
        /// 播放背景音乐
        /// </summary>
        /// <param name="canPlay"></param>
        public void PlayBacksound(string name, bool canPlay) {
            if (audio.clip != null) {
                if (name.IndexOf(audio.clip.name) > -1) {
                    if (!canPlay) {
                        audio.Stop();
                        audio.clip = null;
                        Util.ClearMemory();
                    }
                    return;
                }
            }
            if (canPlay) {
                audio.loop = true;
                audio.clip = LoadAudioClip(name);
                audio.Play();
            } else {
                audio.Stop();
                audio.clip = null;
                Util.ClearMemory();
            }
        }
        public void PlayBacksoundAc(AudioClip clip, bool canPlay)
        {
            if (audio.clip != null)
            {
                if (audio.clip.name.IndexOf(clip.name) > -1)
                {
                    if (!canPlay)
                    {
                        audio.Stop();
                        audio.clip = null;
                        Util.ClearMemory();
                    }
                    return;
                }
            }
            if(audio.clip != null)
            {
                //Debug.LogError(clip.name);
                //Debug.LogError(audio.clip.name);
                if (clip.name == audio.clip.name)
                {
                    return;
                }
            }
            
            if (canPlay)
            {
                audio.loop = true;
                audio.clip = clip;
                audio.Play();
            }
            else
            {
                audio.Stop();
                audio.clip = null;
                Util.ClearMemory();
            }
        }

        /// <summary>
        /// 设置背景音量大小
        /// </summary>
        /// <param name="volume"></param>
        public void SoundOffBacksound(float volume)
        {
            Util.SetFloat("GameBackSound", volume);
            audio.volume = volume;
        }

        /// <summary>
        /// 设置音效大小
        /// </summary>
        /// <param name="volume"></param>
        public void SetSoundEffectVolume(float volume)
        {
            Util.SetFloat("GameSoundEffect", volume);
            soundVolume = volume;
        }

        public void CloseBacksound()
        {
            audio.Stop();
            audio.clip = null;
            Util.ClearMemory();
        }

        /// <summary>
        /// 是否播放音效,默认是1：播放
        /// </summary>
        /// <returns></returns>
        public bool CanPlaySoundEffect() {
            string key = AppConst.AppPrefix + "SoundEffect";
            int i = PlayerPrefs.GetInt(key, 1);
            return i == 1;
        }

        /// <summary>
        /// 播放音频剪辑
        /// </summary>
        /// <param name="clip"></param>
        /// <param name="position"></param>
        public void Play(AudioClip clip, Vector3 position) {
            if (!CanPlaySoundEffect()) return;
            AudioSource.PlayClipAtPoint(clip, position);
        }

        public AudioSource PlayX(Object obj, float delayDestroy = -1)
        {
            Vector3 position = Vector3.zero;
            AudioClip clip = obj as AudioClip;
            if (!CanPlaySoundEffect()) return null;
            float f = isPlaySV ? soundVolume : 0;
            //AudioSource.PlayClipAtPoint(clip, position, f);
            AudioSource source = PlayAudioClip(clip, position, f, delayDestroy);
            return source;
        }

        public AudioSource PlayX(Object obj)
        {
            Vector3 position = Vector3.zero;
            AudioClip clip = obj as AudioClip;
            if (!CanPlaySoundEffect()) return null;
            float f = isPlaySV ? soundVolume : 0;
            //AudioSource.PlayClipAtPoint(clip, position, f);
            AudioSource source = PlayAudioClip(clip, position, f);
            return source;
        }

        public AudioSource PlaySoundCard(Object obj)
		{
			Vector3 position = Vector3.zero;
			AudioClip clip = obj as AudioClip;
			if (!CanPlaySoundEffect()) return null;
			float f = isPlayCard ? soundVolume : 0;
			//AudioSource.PlayClipAtPoint(clip, position, f);
			AudioSource source = PlayAudioClip(clip, position, f);
			return source;
		}

        public  AudioSource PlayAudioClip(AudioClip clip, Vector3 position, float volume, float delayDestroy = -1)
        {
            GameObject go = new GameObject("One shot audio");
            go.name = clip.name;
            go.transform.position = position;
            AudioSource source = go.AddComponent<AudioSource>();
            source.clip = clip;
            source.volume = volume;
            source.spatialBlend = 0;
            source.Play();
            if (delayDestroy == -1)
            {
                Destroy(go, clip.length);
            }
            else {
                source.loop = true;
                Destroy(go, delayDestroy);
            }
            return source;
        }

        public void PlayEX(AudioClip clip)
        {
                audio.loop = false;
                audio.clip = clip;
                audio.Play();
        }

        public void Stop()
        {
            audio.Stop();
            audio.clip = null;
            Util.ClearMemory();
        }
    }
}